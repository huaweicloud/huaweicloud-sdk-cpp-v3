
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryUserSelectedObjectInfoReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryUserSelectedObjectInfoReq_H_


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
/// 查询同步映射请求参数。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryUserSelectedObjectInfoReq
    : public ModelBase
{
public:
    QueryUserSelectedObjectInfoReq();
    virtual ~QueryUserSelectedObjectInfoReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryUserSelectedObjectInfoReq members

    /// <summary>
    /// 库名。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 模式名。
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// 表名。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询， offset 大于等于 0。默认为0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量。默认为10，取值范围【1-1000】
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 是否有映射。
    /// </summary>

    bool isHasColumnInfo() const;
    bool hasColumnInfoIsSet() const;
    void unsethasColumnInfo();
    void setHasColumnInfo(bool value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    bool hasColumnInfo_;
    bool hasColumnInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryUserSelectedObjectInfoReq_H_
