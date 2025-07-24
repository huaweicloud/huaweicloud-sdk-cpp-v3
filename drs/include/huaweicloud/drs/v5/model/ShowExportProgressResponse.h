
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowExportProgressResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowExportProgressResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowExportProgressResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowExportProgressResponse();
    virtual ~ShowExportProgressResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowExportProgressResponse members

    /// <summary>
    /// 导出进度。
    /// </summary>

    std::string getProcessStatus() const;
    bool processStatusIsSet() const;
    void unsetprocessStatus();
    void setProcessStatus(const std::string& value);


protected:
    std::string processStatus_;
    bool processStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowExportProgressResponse_H_
