
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlBackupListResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlBackupListResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/Backups.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowGaussMySqlBackupListResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGaussMySqlBackupListResponse();
    virtual ~ShowGaussMySqlBackupListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGaussMySqlBackupListResponse members

    /// <summary>
    /// 备份信息。
    /// </summary>

    std::vector<Backups>& getBackups();
    bool backupsIsSet() const;
    void unsetbackups();
    void setBackups(const std::vector<Backups>& value);

    /// <summary>
    /// 备份文件的总数。
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);


protected:
    std::vector<Backups> backups_;
    bool backupsIsSet_;
    int64_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlBackupListResponse_H_
