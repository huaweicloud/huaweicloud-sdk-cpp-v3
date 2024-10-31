
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CaptureTaskDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CaptureTaskDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/CaptureRuleAddressDto.h>
#include <huaweicloud/cfw/v1/model/CaptureServiceDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  CaptureTaskDto
    : public ModelBase
{
public:
    CaptureTaskDto();
    virtual ~CaptureTaskDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CaptureTaskDto members

    /// <summary>
    /// 
    /// </summary>

    CaptureRuleAddressDto getDestination() const;
    bool destinationIsSet() const;
    void unsetdestination();
    void setDestination(const CaptureRuleAddressDto& value);

    /// <summary>
    /// 抓包时长，以分钟为单位
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 最大抓包数，以个为单位
    /// </summary>

    int32_t getMaxPackets() const;
    bool maxPacketsIsSet() const;
    void unsetmaxPackets();
    void setMaxPackets(int32_t value);

    /// <summary>
    /// 抓包任务名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CaptureServiceDto getService() const;
    bool serviceIsSet() const;
    void unsetservice();
    void setService(const CaptureServiceDto& value);

    /// <summary>
    /// 
    /// </summary>

    CaptureRuleAddressDto getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const CaptureRuleAddressDto& value);


protected:
    CaptureRuleAddressDto destination_;
    bool destinationIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    int32_t maxPackets_;
    bool maxPacketsIsSet_;
    std::string name_;
    bool nameIsSet_;
    CaptureServiceDto service_;
    bool serviceIsSet_;
    CaptureRuleAddressDto source_;
    bool sourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CaptureTaskDto_H_
