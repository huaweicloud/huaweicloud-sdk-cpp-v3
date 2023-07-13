
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_DeleteMemberRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_DeleteMemberRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  DeleteMemberRequest
    : public ModelBase
{
public:
    DeleteMemberRequest();
    virtual ~DeleteMemberRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteMemberRequest members

    /// <summary>
    /// 备份副本id
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 成员id
    /// </summary>

    std::string getMemberId() const;
    bool memberIdIsSet() const;
    void unsetmemberId();
    void setMemberId(const std::string& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    std::string memberId_;
    bool memberIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteMemberRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteMemberRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_DeleteMemberRequest_H_
