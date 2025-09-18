
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_PortRange_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_PortRange_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// port range
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  PortRange
    : public ModelBase
{
public:
    PortRange();
    virtual ~PortRange();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PortRange members

    /// <summary>
    /// 起始端口。
    /// </summary>

    int32_t getFromPort() const;
    bool fromPortIsSet() const;
    void unsetfromPort();
    void setFromPort(int32_t value);

    /// <summary>
    /// 结束端口。
    /// </summary>

    int32_t getToPort() const;
    bool toPortIsSet() const;
    void unsettoPort();
    void setToPort(int32_t value);


protected:
    int32_t fromPort_;
    bool fromPortIsSet_;
    int32_t toPort_;
    bool toPortIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_PortRange_H_
