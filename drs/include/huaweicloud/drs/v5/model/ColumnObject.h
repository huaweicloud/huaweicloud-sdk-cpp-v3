
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ColumnObject_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ColumnObject_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库列信息。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ColumnObject
    : public ModelBase
{
public:
    ColumnObject();
    virtual ~ColumnObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ColumnObject members

    /// <summary>
    /// 该列在实时同步场景下的类型。取值： - config：当该列作为数据过滤高级设置的关联列时，需要填写，同时如果该列是主建或优化查询所需的索引，则需要填写primary_key_for_data_filtering或index_for_data_filtering。（注意：是否同步该列到目标库由“filtered”属性控制，与库级、模式级、表级控制方式不同。）
    /// </summary>

    std::string getSyncType() const;
    bool syncTypeIsSet() const;
    void unsetsyncType();
    void setSyncType(const std::string& value);

    /// <summary>
    /// 该列是否在数据过滤高级设置场景下为主键，如果是主建则填该列列名，否则不填。
    /// </summary>

    std::string getPrimaryKeyForDataFiltering() const;
    bool primaryKeyForDataFilteringIsSet() const;
    void unsetprimaryKeyForDataFiltering();
    void setPrimaryKeyForDataFiltering(const std::string& value);

    /// <summary>
    /// 优化查询所需的索引，将会为缓存数据增加索引，不会影响源表，当该列作为数据过滤高级设置的关联索引时，需要填写，否则不填。
    /// </summary>

    std::string getIndexForDataFiltering() const;
    bool indexForDataFilteringIsSet() const;
    void unsetindexForDataFiltering();
    void setIndexForDataFiltering(const std::string& value);

    /// <summary>
    /// 该列在目标库的名称（列名映射），当该列为“附加列”时须与数据库表级对象中列名保持一致。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 该列字段的数据类型。 列过滤：填写源列字段的数据类型。 附加列：新填充的列指定字段的数据类型，根据不同操作类型来决定取值范围与约束。取值： - 以默认值方式，支持：int,long,varchar(256),datetime,timestamp。 - 以create_time为列，支持：long,datetime,timestamp。 - 以update_time为列，支持：long,datetime,timestamp。 - 以表达式为列，支持：varchar(256)，且列值仅为：concat(__current_database, &#39;@&#39;, __current_table) - 以serverName@database@table为列，支持：varchar(256)。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 该列是否在列映射场景下为主键，如果是主建则填PRI，否则填空。
    /// </summary>

    std::string getPrimaryKeyForColumnFiltering() const;
    bool primaryKeyForColumnFilteringIsSet() const;
    void unsetprimaryKeyForColumnFiltering();
    void setPrimaryKeyForColumnFiltering(const std::string& value);

    /// <summary>
    /// 该列是否进列过滤，不能与附加列additional同时使用。取值： - true：表示同步该列。 - false：表示过滤该列不同步。
    /// </summary>

    bool isFiltered() const;
    bool filteredIsSet() const;
    void unsetfiltered();
    void setFiltered(bool value);

    /// <summary>
    /// 该列是否为附加列，当该列为附加列时：name必须与表级对象中列名一致，并且不能与列过滤filtered同时使用。
    /// </summary>

    bool isAdditional() const;
    bool additionalIsSet() const;
    void unsetadditional();
    void setAdditional(bool value);

    /// <summary>
    /// 操作类型，以特定的操作类型填充新加的列。取值： - 以默认值方式：\&quot;operation_type\&quot;:\&quot;ADDITIONALCOLUMN,default_value\&quot; - 以create_time为列：\&quot;operation_type\&quot;:\&quot;ADDITIONALCOLUMN,create_time\&quot; - 以update_time为列：\&quot;operation_type\&quot;:\&quot;ADDITIONALCOLUMN,update_time\&quot; - 以表达式为列：\&quot;operation_type\&quot;:\&quot;ADDITIONALCOLUMN,expression\&quot; - 以serverName@database@table为列：\&quot;operation_type\&quot;:\&quot;ADDITIONALCOLUMN,server_database_table\&quot;
    /// </summary>

    std::string getOperationType() const;
    bool operationTypeIsSet() const;
    void unsetoperationType();
    void setOperationType(const std::string& value);

    /// <summary>
    /// 附加列的值。约束： - 当操作类型仅“以默认值方式”，“以serverName@database@table为列”时，才支持输入对应字段类型的值。 - 当操作类型为“以表达式为列”时，该字段为固定值\&quot;concat(__current_database, &#39;@&#39;, __current_table)\&quot;，不需要填写。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string syncType_;
    bool syncTypeIsSet_;
    std::string primaryKeyForDataFiltering_;
    bool primaryKeyForDataFilteringIsSet_;
    std::string indexForDataFiltering_;
    bool indexForDataFilteringIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string primaryKeyForColumnFiltering_;
    bool primaryKeyForColumnFilteringIsSet_;
    bool filtered_;
    bool filteredIsSet_;
    bool additional_;
    bool additionalIsSet_;
    std::string operationType_;
    bool operationTypeIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ColumnObject_H_
