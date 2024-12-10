
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_GrantUserInfo_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_GrantUserInfo_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  GrantUserInfo
    : public ModelBase
{
public:
    GrantUserInfo();
    virtual ~GrantUserInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GrantUserInfo members

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 有效时间
    /// </summary>

    int64_t getValidityTime() const;
    bool validityTimeIsSet() const;
    void unsetvalidityTime();
    void setValidityTime(int64_t value);


protected:
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t validityTime_;
    bool validityTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_GrantUserInfo_H_
