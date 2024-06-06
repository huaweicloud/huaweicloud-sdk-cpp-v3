
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListShareBackupsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListShareBackupsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ShareBackups.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListShareBackupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListShareBackupsResponse();
    virtual ~ListShareBackupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListShareBackupsResponse members

    /// <summary>
    /// 共享备份列表。
    /// </summary>

    std::vector<ShareBackups>& getBackups();
    bool backupsIsSet() const;
    void unsetbackups();
    void setBackups(const std::vector<ShareBackups>& value);

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<ShareBackups> backups_;
    bool backupsIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListShareBackupsResponse_H_
