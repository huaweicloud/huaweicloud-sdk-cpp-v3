
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_GetProjectInfoV4Result_project_creator_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_GetProjectInfoV4Result_project_creator_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建者信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  GetProjectInfoV4Result_project_creator
    : public ModelBase
{
public:
    GetProjectInfoV4Result_project_creator();
    virtual ~GetProjectInfoV4Result_project_creator();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetProjectInfoV4Result_project_creator members

    /// <summary>
    /// 创建人num_id
    /// </summary>

    int32_t getUserNumId() const;
    bool userNumIdIsSet() const;
    void unsetuserNumId();
    void setUserNumId(int32_t value);

    /// <summary>
    /// 创建人uuid
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 创建人姓名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 创建人租户id
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 创建人租户名称
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 创建人昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);


protected:
    int32_t userNumId_;
    bool userNumIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_GetProjectInfoV4Result_project_creator_H_
