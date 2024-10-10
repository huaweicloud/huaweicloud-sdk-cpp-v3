
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafAttackEventlist_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafAttackEventlist_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/Backend.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListWafAttackEventlist
    : public ModelBase
{
public:
    ListWafAttackEventlist();
    virtual ~ListWafAttackEventlist();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWafAttackEventlist members

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 攻击目标域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 攻击时间
    /// </summary>

    int32_t getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(int32_t value);

    /// <summary>
    /// 攻击源IP
    /// </summary>

    std::string getSip() const;
    bool sipIsSet() const;
    void unsetsip();
    void setSip(const std::string& value);

    /// <summary>
    /// 防御动作
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 攻击url
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 攻击类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Backend getBackend() const;
    bool backendIsSet() const;
    void unsetbackend();
    void setBackend(const Backend& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string domain_;
    bool domainIsSet_;
    int32_t time_;
    bool timeIsSet_;
    std::string sip_;
    bool sipIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string type_;
    bool typeIsSet_;
    Backend backend_;
    bool backendIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafAttackEventlist_H_
