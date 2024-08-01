
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowCursorByTimeResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowCursorByTimeResponse_H_


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
class HUAWEICLOUD_LTS_V2_EXPORT  ShowCursorByTimeResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCursorByTimeResponse();
    virtual ~ShowCursorByTimeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCursorByTimeResponse members

    /// <summary>
    /// 游标值
    /// </summary>

    int64_t getCursor() const;
    bool cursorIsSet() const;
    void unsetcursor();
    void setCursor(int64_t value);


protected:
    int64_t cursor_;
    bool cursorIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowCursorByTimeResponse_H_
