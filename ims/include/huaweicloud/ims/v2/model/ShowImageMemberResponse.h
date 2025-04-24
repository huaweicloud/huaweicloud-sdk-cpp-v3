
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ShowImageMemberResponse_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ShowImageMemberResponse_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  ShowImageMemberResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowImageMemberResponse();
    virtual ~ShowImageMemberResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowImageMemberResponse members

    /// <summary>
    /// 共享状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 共享时间，格式为UTC时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间，格式为UTC时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 镜像ID
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 成员ID
    /// </summary>

    std::string getMemberId() const;
    bool memberIdIsSet() const;
    void unsetmemberId();
    void setMemberId(const std::string& value);

    /// <summary>
    /// 共享视图
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// 共享成员类型
    /// </summary>

    std::string getMemberType() const;
    bool memberTypeIsSet() const;
    void unsetmemberType();
    void setMemberType(const std::string& value);

    /// <summary>
    /// 共享组织的URN，仅当member_type类型为organization时，才会返回urn字段。
    /// </summary>

    std::string getUrn() const;
    bool urnIsSet() const;
    void unseturn();
    void setUrn(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string memberId_;
    bool memberIdIsSet_;
    std::string schema_;
    bool schemaIsSet_;
    std::string memberType_;
    bool memberTypeIsSet_;
    std::string urn_;
    bool urnIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ShowImageMemberResponse_H_
