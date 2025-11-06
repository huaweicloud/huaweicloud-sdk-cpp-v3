
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestReviewerExternalDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestReviewerExternalDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  MergeRequestReviewerExternalDto
    : public ModelBase
{
public:
    MergeRequestReviewerExternalDto();
    virtual ~MergeRequestReviewerExternalDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestReviewerExternalDto members

    /// <summary>
    /// 评审人id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 评审人名称
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// 评审人名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 评审人昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 评审人状态
    /// </summary>

    bool isState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(bool value);

    /// <summary>
    /// 打分
    /// </summary>

    int32_t getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(int32_t value);

    /// <summary>
    /// 租户名称
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    bool state_;
    bool stateIsSet_;
    int32_t score_;
    bool scoreIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestReviewerExternalDto_H_
