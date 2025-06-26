
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowOperationResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowOperationResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/rgc/v1/model/OrganizationalPercentageDetail.h>

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
class HUAWEICLOUD_RGC_V1_EXPORT  ShowOperationResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowOperationResponse();
    virtual ~ShowOperationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOperationResponse members

    /// <summary>
    /// 操作ID。
    /// </summary>

    std::string getOperationId() const;
    bool operationIdIsSet() const;
    void unsetoperationId();
    void setOperationId(const std::string& value);

    /// <summary>
    /// 完成进度百分比。
    /// </summary>

    int32_t getPercentageComplete() const;
    bool percentageCompleteIsSet() const;
    void unsetpercentageComplete();
    void setPercentageComplete(int32_t value);

    /// <summary>
    /// 状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 创建账号、纳管注册OU、纳管账号的详细进度信息。
    /// </summary>

    std::vector<OrganizationalPercentageDetail>& getPercentageDetails();
    bool percentageDetailsIsSet() const;
    void unsetpercentageDetails();
    void setPercentageDetails(const std::vector<OrganizationalPercentageDetail>& value);

    /// <summary>
    /// 创建账号、纳管注册OU、纳管账号的错误信息描述。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string operationId_;
    bool operationIdIsSet_;
    int32_t percentageComplete_;
    bool percentageCompleteIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<OrganizationalPercentageDetail> percentageDetails_;
    bool percentageDetailsIsSet_;
    std::string message_;
    bool messageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowOperationResponse_H_
