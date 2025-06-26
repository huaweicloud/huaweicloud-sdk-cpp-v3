
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_PageInfoDto_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_PageInfoDto_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  PageInfoDto
    : public ModelBase
{
public:
    PageInfoDto();
    virtual ~PageInfoDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageInfoDto members

    /// <summary>
    /// 在标签请求参数中使用以获取输出的下一部分。重复此操作，直到响应元素返回null。如果存在，则表示可用的输出比当前响应中包含的输出多。
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);

    /// <summary>
    /// 本页返回条目数量。
    /// </summary>

    int32_t getCurrentCount() const;
    bool currentCountIsSet() const;
    void unsetcurrentCount();
    void setCurrentCount(int32_t value);


protected:
    std::string nextMarker_;
    bool nextMarkerIsSet_;
    int32_t currentCount_;
    bool currentCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_PageInfoDto_H_
