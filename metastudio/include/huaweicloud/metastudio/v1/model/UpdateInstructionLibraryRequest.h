
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateInstructionLibraryRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateInstructionLibraryRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/UpdateInstructionLibraryReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateInstructionLibraryRequest
    : public ModelBase
{
public:
    UpdateInstructionLibraryRequest();
    virtual ~UpdateInstructionLibraryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInstructionLibraryRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带的鉴权信息。
    /// </summary>

    std::string getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带项目ID信息。
    /// </summary>

    std::string getXProjectId() const;
    bool xProjectIdIsSet() const;
    void unsetxProjectId();
    void setXProjectId(const std::string& value);

    /// <summary>
    /// 第三方用户ID。不允许输入中文。
    /// </summary>

    std::string getXAppUserId() const;
    bool xAppUserIdIsSet() const;
    void unsetxAppUserId();
    void setXAppUserId(const std::string& value);

    /// <summary>
    /// 指令集ID。
    /// </summary>

    std::string getInstructionLibraryId() const;
    bool instructionLibraryIdIsSet() const;
    void unsetinstructionLibraryId();
    void setInstructionLibraryId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateInstructionLibraryReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateInstructionLibraryReq& value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string xProjectId_;
    bool xProjectIdIsSet_;
    std::string xAppUserId_;
    bool xAppUserIdIsSet_;
    std::string instructionLibraryId_;
    bool instructionLibraryIdIsSet_;
    UpdateInstructionLibraryReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateInstructionLibraryRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateInstructionLibraryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateInstructionLibraryRequest_H_
