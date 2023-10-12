
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_TopUrlSummary_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_TopUrlSummary_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  TopUrlSummary
    : public ModelBase
{
public:
    TopUrlSummary();
    virtual ~TopUrlSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TopUrlSummary members

    /// <summary>
    /// URL名称。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 对应查询类型的值。（流量单位：Byte）
    /// </summary>

    int64_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int64_t value);

    /// <summary>
    /// 查询起始时间戳。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 查询结束时间戳
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 参数类型支持：flux(流量)，req_num(请求总数)。
    /// </summary>

    std::string getStatType() const;
    bool statTypeIsSet() const;
    void unsetstatType();
    void setStatType(const std::string& value);


protected:
    std::string url_;
    bool urlIsSet_;
    int64_t value_;
    bool valueIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string statType_;
    bool statTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_TopUrlSummary_H_
