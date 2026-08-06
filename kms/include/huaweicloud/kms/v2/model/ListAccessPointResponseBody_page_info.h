
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAccessPointResponseBody_page_info_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAccessPointResponseBody_page_info_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 分页信息 **取值范围：** 不涉及
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListAccessPointResponseBody_page_info
    : public ModelBase
{
public:
    ListAccessPointResponseBody_page_info();
    virtual ~ListAccessPointResponseBody_page_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAccessPointResponseBody_page_info members

    /// <summary>
    /// **参数解释：** 下一页的marker **取值范围：** 不涉及
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);

    /// <summary>
    /// **参数解释：** 本页数量 **取值范围：** 不涉及
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

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAccessPointResponseBody_page_info_H_
