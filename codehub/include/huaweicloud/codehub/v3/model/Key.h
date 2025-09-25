
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_Key_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_Key_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  Key
    : public ModelBase
{
public:
    Key();
    virtual ~Key();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Key members

    /// <summary>
    /// 是否允许推送
    /// </summary>

    bool isCanPush() const;
    bool canPushIsSet() const;
    void unsetcanPush();
    void setCanPush(bool value);

    /// <summary>
    /// 部署密钥新建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 部署密钥
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 部署密钥id
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 部署密钥名称
    /// </summary>

    std::string getKeyTitle() const;
    bool keyTitleIsSet() const;
    void unsetkeyTitle();
    void setKeyTitle(const std::string& value);


protected:
    bool canPush_;
    bool canPushIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string key_;
    bool keyIsSet_;
    std::string keyId_;
    bool keyIdIsSet_;
    std::string keyTitle_;
    bool keyTitleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_Key_H_
