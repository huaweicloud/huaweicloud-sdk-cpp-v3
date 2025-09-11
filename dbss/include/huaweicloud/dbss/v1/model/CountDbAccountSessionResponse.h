
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountDbAccountSessionResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountDbAccountSessionResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ReportAccountSessionNew.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  CountDbAccountSessionResponse
    : public ModelBase, public HttpResponse
{
public:
    CountDbAccountSessionResponse();
    virtual ~CountDbAccountSessionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountDbAccountSessionResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ReportAccountSessionNew>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ReportAccountSessionNew>& value);


protected:
    std::vector<ReportAccountSessionNew> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountDbAccountSessionResponse_H_
