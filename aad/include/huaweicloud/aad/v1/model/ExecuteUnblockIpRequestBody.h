
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ExecuteUnblockIpRequestBody_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ExecuteUnblockIpRequestBody_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  ExecuteUnblockIpRequestBody
    : public ModelBase
{
public:
    ExecuteUnblockIpRequestBody();
    virtual ~ExecuteUnblockIpRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecuteUnblockIpRequestBody members

    /// <summary>
    /// ip地址
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 用于查询IP的封堵时间
    /// </summary>

    int64_t getBlockingTime() const;
    bool blockingTimeIsSet() const;
    void unsetblockingTime();
    void setBlockingTime(int64_t value);


protected:
    std::string ip_;
    bool ipIsSet_;
    int64_t blockingTime_;
    bool blockingTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ExecuteUnblockIpRequestBody_H_
