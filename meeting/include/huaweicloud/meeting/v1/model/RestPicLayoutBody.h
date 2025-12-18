
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestPicLayoutBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestPicLayoutBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/RestPicLayout.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 子画面信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestPicLayoutBody
    : public ModelBase
{
public:
    RestPicLayoutBody();
    virtual ~RestPicLayoutBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestPicLayoutBody members

    /// <summary>
    /// 
    /// </summary>

    RestPicLayout getRestPicLayout() const;
    bool restPicLayoutIsSet() const;
    void unsetrestPicLayout();
    void setRestPicLayout(const RestPicLayout& value);


protected:
    RestPicLayout restPicLayout_;
    bool restPicLayoutIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestPicLayoutBody_H_
