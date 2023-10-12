
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTemplateResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTemplateResponse_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/TemplateInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTemplateResponse();
    virtual ~ListTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTemplateResponse members

    /// <summary>
    /// 转码模板
    /// </summary>

    std::vector<TemplateInfo>& getTemplateArray();
    bool templateArrayIsSet() const;
    void unsettemplateArray();
    void setTemplateArray(const std::vector<TemplateInfo>& value);

    /// <summary>
    /// 转码模板总数 
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<TemplateInfo> templateArray_;
    bool templateArrayIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTemplateResponse_H_
