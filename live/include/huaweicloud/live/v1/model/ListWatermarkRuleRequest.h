
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListWatermarkRuleRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListWatermarkRuleRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListWatermarkRuleRequest
    : public ModelBase
{
public:
    ListWatermarkRuleRequest();
    virtual ~ListWatermarkRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWatermarkRuleRequest members

    /// <summary>
    /// 水印模板ID
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 推流域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 推流appname
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// OTT场景，频道ID
    /// </summary>

    std::string getChannelId() const;
    bool channelIdIsSet() const;
    void unsetchannelId();
    void setChannelId(const std::string& value);

    /// <summary>
    /// OTT场景，填转码模板ID，云直播填流名
    /// </summary>

    std::string getStream() const;
    bool streamIsSet() const;
    void unsetstream();
    void setStream(const std::string& value);

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询，offset大于等于0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页记录数，取值范围[1,100]，默认值10
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string templateId_;
    bool templateIdIsSet_;
    std::string domain_;
    bool domainIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string channelId_;
    bool channelIdIsSet_;
    std::string stream_;
    bool streamIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListWatermarkRuleRequest& dereference_from_shared_ptr(std::shared_ptr<ListWatermarkRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListWatermarkRuleRequest_H_
