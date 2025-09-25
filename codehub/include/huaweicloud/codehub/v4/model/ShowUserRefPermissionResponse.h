
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowUserRefPermissionResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowUserRefPermissionResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/UserRefPermissionBasicDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowUserRefPermissionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowUserRefPermissionResponse();
    virtual ~ShowUserRefPermissionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserRefPermissionResponse members

    /// <summary>
    /// 
    /// </summary>

    UserRefPermissionBasicDto getRead() const;
    bool readIsSet() const;
    void unsetread();
    void setRead(const UserRefPermissionBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    UserRefPermissionBasicDto getReview() const;
    bool reviewIsSet() const;
    void unsetreview();
    void setReview(const UserRefPermissionBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    UserRefPermissionBasicDto getApproval() const;
    bool approvalIsSet() const;
    void unsetapproval();
    void setApproval(const UserRefPermissionBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    UserRefPermissionBasicDto getCreateChange() const;
    bool createChangeIsSet() const;
    void unsetcreateChange();
    void setCreateChange(const UserRefPermissionBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    UserRefPermissionBasicDto getMerge() const;
    bool mergeIsSet() const;
    void unsetmerge();
    void setMerge(const UserRefPermissionBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    UserRefPermissionBasicDto getCreateDelete() const;
    bool createDeleteIsSet() const;
    void unsetcreateDelete();
    void setCreateDelete(const UserRefPermissionBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    UserRefPermissionBasicDto getPush() const;
    bool pushIsSet() const;
    void unsetpush();
    void setPush(const UserRefPermissionBasicDto& value);


protected:
    UserRefPermissionBasicDto read_;
    bool readIsSet_;
    UserRefPermissionBasicDto review_;
    bool reviewIsSet_;
    UserRefPermissionBasicDto approval_;
    bool approvalIsSet_;
    UserRefPermissionBasicDto createChange_;
    bool createChangeIsSet_;
    UserRefPermissionBasicDto merge_;
    bool mergeIsSet_;
    UserRefPermissionBasicDto createDelete_;
    bool createDeleteIsSet_;
    UserRefPermissionBasicDto push_;
    bool pushIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowUserRefPermissionResponse_H_
