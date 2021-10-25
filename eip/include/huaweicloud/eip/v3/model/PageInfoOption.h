
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_PageInfoOption_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_PageInfoOption_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 分页页码信息
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  PageInfoOption
    : public ModelBase
{
public:
    PageInfoOption();
    virtual ~PageInfoOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PageInfoOption members

    /// <summary>
    /// 翻页时，作为前一页的marker取值
    /// </summary>

    std::string getPreviousMarker() const;
    bool previousMarkerIsSet() const;
    void unsetpreviousMarker();
    void setPreviousMarker(const std::string& value);

    /// <summary>
    /// 翻页时，作为后一页的marker取值
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);

    /// <summary>
    /// 当前页的数据总数
    /// </summary>

    int32_t getCurrentCount() const;
    bool currentCountIsSet() const;
    void unsetcurrentCount();
    void setCurrentCount(int32_t value);


protected:
    std::string previousMarker_;
    bool previousMarkerIsSet_;
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

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_PageInfoOption_H_
