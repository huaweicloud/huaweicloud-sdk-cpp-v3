
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_SchemaObject_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_SchemaObject_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/TableObject.h>
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
/// 数据库模式对象。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  SchemaObject
    : public ModelBase
{
public:
    SchemaObject();
    virtual ~SchemaObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SchemaObject members

    /// <summary>
    /// 该模式在实时同步场景下的类型。取值： - config：仅当该模式作为数据过滤高级设置的关联模式时，需要填写，此时该模式以及该模式下的tables“不会”被同步到目标库，name、all属性不生效，tables需要填写被关联的相关对象。（注意：如果需要同步该模式对象，则在下级对象中填写sync_type值为config。）
    /// </summary>

    std::string getSyncType() const;
    bool syncTypeIsSet() const;
    void unsetsyncType();
    void setSyncType(const std::string& value);

    /// <summary>
    /// 该模式在目标库的名称（模式名映射）。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否整模式迁移或同步。注意： 1.当该模式下的表、列需要做数据过滤、列过滤、列映射时，填false，否则填true； 2.当该模式下的表需要做附加列时，需要填true，并且在表级对象的columns里填写附加列信息； 3.当该模式下的表所包含的列作为数据过滤高级设置的关联列时，需要填true，并且在columns里填写关联列信息、config_conditions填写数据过滤高级设置的配置条件；
    /// </summary>

    bool isAll() const;
    bool allIsSet() const;
    void unsetall();
    void setAll(bool value);

    /// <summary>
    /// 需要迁移或同步的表，当整模式迁移或同步为false时需要填写。
    /// </summary>

    std::map<std::string, TableObject>& getTables();
    bool tablesIsSet() const;
    void unsettables();
    void setTables(const std::map<std::string, TableObject>& value);


protected:
    std::string syncType_;
    bool syncTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool all_;
    bool allIsSet_;
    std::map<std::string, TableObject> tables_;
    bool tablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_SchemaObject_H_
