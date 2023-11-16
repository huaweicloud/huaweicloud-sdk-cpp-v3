
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ListPeakResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ListPeakResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  ListPeakResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPeakResponse();
    virtual ~ListPeakResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPeakResponse members

    /// <summary>
    /// 攻击峰值
    /// </summary>

    double getAttackKbpsPeak() const;
    bool attackKbpsPeakIsSet() const;
    void unsetattackKbpsPeak();
    void setAttackKbpsPeak(double value);

    /// <summary>
    /// 流量峰值
    /// </summary>

    double getInKbpsPeak() const;
    bool inKbpsPeakIsSet() const;
    void unsetinKbpsPeak();
    void setInKbpsPeak(double value);

    /// <summary>
    /// 攻击次数
    /// </summary>

    double getDdosCount() const;
    bool ddosCountIsSet() const;
    void unsetddosCount();
    void setDdosCount(double value);

    /// <summary>
    /// 攻击峰值发生时间点
    /// </summary>

    double getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(double value);

    /// <summary>
    /// 高防IP
    /// </summary>

    std::string getVip() const;
    bool vipIsSet() const;
    void unsetvip();
    void setVip(const std::string& value);


protected:
    double attackKbpsPeak_;
    bool attackKbpsPeakIsSet_;
    double inKbpsPeak_;
    bool inKbpsPeakIsSet_;
    double ddosCount_;
    bool ddosCountIsSet_;
    double timestamp_;
    bool timestampIsSet_;
    std::string vip_;
    bool vipIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ListPeakResponse_H_
