
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DatabaseObject_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DatabaseObject_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/TableObject.h>
#include <huaweicloud/drs/v5/model/SchemaObject.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库库级对象。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DatabaseObject
    : public ModelBase
{
public:
    DatabaseObject();
    virtual ~DatabaseObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DatabaseObject members

    /// <summary>
    /// 该数据库在实时同步场景下的类型。取值： - config：仅当该库作为数据过滤高级设置的关联库时，需要填写，此时该库以及该库下的schemas、tables“不会”被同步到目标库，name、all属性不生效，schemas、tables需要填写被关联的相关对象。（注意：如果需要同步该库级对象，则在下级对象中填写sync_type值为config。）
    /// </summary>

    std::string getSyncType() const;
    bool syncTypeIsSet() const;
    void unsetsyncType();
    void setSyncType(const std::string& value);

    /// <summary>
    /// 该数据库在目标库的名称（库名映射）。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否整库迁移或同步。注意： 1.当该库下的模式、表、列需要做数据过滤、列过滤、列映射时，填false，否则填true； 2.当该库下的表需要做附加列时，需要填true，并且在表级对象的columns里填写附加列信息； 3.当该库下的表所包含的列作为数据过滤高级设置的关联列时，需要填true，并且在columns里填写关联列信息，在config_conditions填写数据过滤高级设置的配置条件；
    /// </summary>

    bool isAll() const;
    bool allIsSet() const;
    void unsetall();
    void setAll(bool value);

    /// <summary>
    /// 需要迁移或同步的模式，当整库迁移或同步为false时需要填写。
    /// </summary>

    std::map<std::string, SchemaObject>& getSchemas();
    bool schemasIsSet() const;
    void unsetschemas();
    void setSchemas(const std::map<std::string, SchemaObject>& value);

    /// <summary>
    /// 需要迁移或同步的表，当整库迁移或同步为false时需要填写。
    /// </summary>

    std::map<std::string, TableObject>& getTables();
    bool tablesIsSet() const;
    void unsettables();
    void setTables(const std::map<std::string, TableObject>& value);

    /// <summary>
    /// 库下的表的数量，表的数量超过阈值就不显示。
    /// </summary>

    int32_t getTotalTableNum() const;
    bool totalTableNumIsSet() const;
    void unsettotalTableNum();
    void setTotalTableNum(int32_t value);

    /// <summary>
    /// 是否已同步
    /// </summary>

    bool isIsSynchronized() const;
    bool isSynchronizedIsSet() const;
    void unsetisSynchronized();
    void setIsSynchronized(bool value);


protected:
    std::string syncType_;
    bool syncTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool all_;
    bool allIsSet_;
    std::map<std::string, SchemaObject> schemas_;
    bool schemasIsSet_;
    std::map<std::string, TableObject> tables_;
    bool tablesIsSet_;
    int32_t totalTableNum_;
    bool totalTableNumIsSet_;
    bool isSynchronized_;
    bool isSynchronizedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DatabaseObject_H_
