
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_IpStatusDetail_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_IpStatusDetail_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 封堵信息
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  IpStatusDetail
    : public ModelBase
{
public:
    IpStatusDetail();
    virtual ~IpStatusDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpStatusDetail members

    /// <summary>
    /// 封堵时间
    /// </summary>

    int64_t getBlockTime() const;
    bool blockTimeIsSet() const;
    void unsetblockTime();
    void setBlockTime(int64_t value);

    /// <summary>
    /// 解封时间
    /// </summary>

    int64_t getUnblockTime() const;
    bool unblockTimeIsSet() const;
    void unsetunblockTime();
    void setUnblockTime(int64_t value);


protected:
    int64_t blockTime_;
    bool blockTimeIsSet_;
    int64_t unblockTime_;
    bool unblockTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_IpStatusDetail_H_
