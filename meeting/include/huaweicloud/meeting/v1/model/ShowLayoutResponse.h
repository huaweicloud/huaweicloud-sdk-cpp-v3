
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowLayoutResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowLayoutResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/RestPicLayout.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowLayoutResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLayoutResponse();
    virtual ~ShowLayoutResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLayoutResponse members

    /// <summary>
    /// 结果码。 * 0：成功 * 非0：失败 
    /// </summary>

    int32_t getReturnCode() const;
    bool returnCodeIsSet() const;
    void unsetreturnCode();
    void setReturnCode(int32_t value);

    /// <summary>
    /// 结果描述。 * Success：成功 * 其他：失败原因 
    /// </summary>

    std::string getReturnDesc() const;
    bool returnDescIsSet() const;
    void unsetreturnDesc();
    void setReturnDesc(const std::string& value);

    /// <summary>
    /// 多画面布局。
    /// </summary>

    std::vector<RestPicLayout>& getPicLayouts();
    bool picLayoutsIsSet() const;
    void unsetpicLayouts();
    void setPicLayouts(const std::vector<RestPicLayout>& value);


protected:
    int32_t returnCode_;
    bool returnCodeIsSet_;
    std::string returnDesc_;
    bool returnDescIsSet_;
    std::vector<RestPicLayout> picLayouts_;
    bool picLayoutsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowLayoutResponse_H_
