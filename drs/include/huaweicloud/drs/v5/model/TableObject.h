
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_TableObject_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_TableObject_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <huaweicloud/drs/v5/model/ColumnObject.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库表级对象。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  TableObject
    : public ModelBase
{
public:
    TableObject();
    virtual ~TableObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TableObject members

    /// <summary>
    /// 该表在实时同步场景下的类型。取值： - config：仅当该表作为数据过滤高级设置的关联表时，需要填写，此时该表以及该表下的columns“不会”被同步到目标库，name、all、filtered、filter_conditions属性不生效，columns需要填写被关联的相关对象，config_conditions需要填写数据过滤高级设置的配置条件。（注意：如果需要同步该表级对象，则在下级对象中填写sync_type值为config。）
    /// </summary>

    std::string getSyncType() const;
    bool syncTypeIsSet() const;
    void unsetsyncType();
    void setSyncType(const std::string& value);

    /// <summary>
    /// 对象类型。取值： - table：表。 - view：视图。 - procedure：存储过程。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 该表在目标库的名称（表名映射）。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否整表迁移或同步。注意： 1.当该表不需要做列过滤、列映射时，填true，如果需要做列过滤、列映射则填false； 2.当该表需要做附加列时，需要填true，并且在columns里填写附加列信息； 3.当该表所包含的列作为数据过滤高级设置的关联列时，需要填true，并且在columns里填写关联列信息、config_conditions填写数据过滤高级设置的配置条件；
    /// </summary>

    bool isAll() const;
    bool allIsSet() const;
    void unsetall();
    void setAll(bool value);

    /// <summary>
    /// 一对多情况下，表级上对库名的映射。
    /// </summary>

    std::string getDbAliasName() const;
    bool dbAliasNameIsSet() const;
    void unsetdbAliasName();
    void setDbAliasName(const std::string& value);

    /// <summary>
    /// 一对多情况下，表级上对schema名的映射。
    /// </summary>

    std::string getSchemaAliasName() const;
    bool schemaAliasNameIsSet() const;
    void unsetschemaAliasName();
    void setSchemaAliasName(const std::string& value);

    /// <summary>
    /// 该表是否进行数据过滤。
    /// </summary>

    bool isFiltered() const;
    bool filteredIsSet() const;
    void unsetfiltered();
    void setFiltered(bool value);

    /// <summary>
    /// 该表数据的过滤条件，生成加工规则值为SQL条件语句，长度限制512。
    /// </summary>

    std::vector<std::string>& getFilterConditions();
    bool filterConditionsIsSet() const;
    void unsetfilterConditions();
    void setFilterConditions(const std::vector<std::string>& value);

    /// <summary>
    /// 该表数据过滤高级设置的配置条件，当该表作为联表查询时填写，生成加工规则值为SQL条件语句，长度限制512。
    /// </summary>

    std::vector<std::string>& getConfigConditions();
    bool configConditionsIsSet() const;
    void unsetconfigConditions();
    void setConfigConditions(const std::vector<std::string>& value);

    /// <summary>
    /// 是否已经进行同步。
    /// </summary>

    bool isIsSynchronized() const;
    bool isSynchronizedIsSet() const;
    void unsetisSynchronized();
    void setIsSynchronized(bool value);

    /// <summary>
    /// 需要同步/映射/过滤/新增的列，当需要列过滤、列映射、附加列功能时填写，仅在实时同步任务中生效，当整表同步为false时需要填写。
    /// </summary>

    std::map<std::string, ColumnObject>& getColumns();
    bool columnsIsSet() const;
    void unsetcolumns();
    void setColumns(const std::map<std::string, ColumnObject>& value);


protected:
    std::string syncType_;
    bool syncTypeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool all_;
    bool allIsSet_;
    std::string dbAliasName_;
    bool dbAliasNameIsSet_;
    std::string schemaAliasName_;
    bool schemaAliasNameIsSet_;
    bool filtered_;
    bool filteredIsSet_;
    std::vector<std::string> filterConditions_;
    bool filterConditionsIsSet_;
    std::vector<std::string> configConditions_;
    bool configConditionsIsSet_;
    bool isSynchronized_;
    bool isSynchronizedIsSet_;
    std::map<std::string, ColumnObject> columns_;
    bool columnsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_TableObject_H_
