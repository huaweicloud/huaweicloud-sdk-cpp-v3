
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowCursorTimeResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowCursorTimeResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ShowCursorTimeResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCursorTimeResponse();
    virtual ~ShowCursorTimeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCursorTimeResponse members

    /// <summary>
    /// 游标时间值
    /// </summary>

    int64_t getCursorTime() const;
    bool cursorTimeIsSet() const;
    void unsetcursorTime();
    void setCursorTime(int64_t value);


protected:
    int64_t cursorTime_;
    bool cursorTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowCursorTimeResponse_H_
