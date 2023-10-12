
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_UserInfo_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_UserInfo_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/BaseUser.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户信息。
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  UserInfo
    : public ModelBase
{
public:
    UserInfo();
    virtual ~UserInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserInfo members

    /// <summary>
    /// 账号ID，参见《云审计服务API参考》“获取账号ID和项目ID”章节。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 账号名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BaseUser getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const BaseUser& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    BaseUser domain_;
    bool domainIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_UserInfo_H_
