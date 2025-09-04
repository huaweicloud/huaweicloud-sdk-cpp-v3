
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTableMetaInfoResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTableMetaInfoResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/TableMetaInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowTableMetaInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTableMetaInfoResponse();
    virtual ~ShowTableMetaInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTableMetaInfoResponse members

    /// <summary>
    /// 要版本升级的批量实例。
    /// </summary>

    std::vector<TableMetaInfo>& getTableMetaInfos();
    bool tableMetaInfosIsSet() const;
    void unsettableMetaInfos();
    void setTableMetaInfos(const std::vector<TableMetaInfo>& value);

    /// <summary>
    /// 数据表名称
    /// </summary>

    std::vector<std::string>& getTableNames();
    bool tableNamesIsSet() const;
    void unsettableNames();
    void setTableNames(const std::vector<std::string>& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::vector<std::string>& getDatabaseNames();
    bool databaseNamesIsSet() const;
    void unsetdatabaseNames();
    void setDatabaseNames(const std::vector<std::string>& value);


protected:
    std::vector<TableMetaInfo> tableMetaInfos_;
    bool tableMetaInfosIsSet_;
    std::vector<std::string> tableNames_;
    bool tableNamesIsSet_;
    std::vector<std::string> databaseNames_;
    bool databaseNamesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTableMetaInfoResponse_H_
