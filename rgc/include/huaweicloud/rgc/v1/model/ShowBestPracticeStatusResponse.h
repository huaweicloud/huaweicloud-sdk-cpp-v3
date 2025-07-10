
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeStatusResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeStatusResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowBestPracticeStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBestPracticeStatusResponse();
    virtual ~ShowBestPracticeStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBestPracticeStatusResponse members

    /// <summary>
    /// 操作Id
    /// </summary>

    std::string getOperationId() const;
    bool operationIdIsSet() const;
    void unsetoperationId();
    void setOperationId(const std::string& value);

    /// <summary>
    /// 状态：进行中，成功，成败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 检测进度
    /// </summary>

    int32_t getPercentageComplete() const;
    bool percentageCompleteIsSet() const;
    void unsetpercentageComplete();
    void setPercentageComplete(int32_t value);

    /// <summary>
    /// 错误消息
    /// </summary>

    std::vector<std::string>& getErrorMessages();
    bool errorMessagesIsSet() const;
    void unseterrorMessages();
    void setErrorMessages(const std::vector<std::string>& value);


protected:
    std::string operationId_;
    bool operationIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t percentageComplete_;
    bool percentageCompleteIsSet_;
    std::vector<std::string> errorMessages_;
    bool errorMessagesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowBestPracticeStatusResponse_H_
