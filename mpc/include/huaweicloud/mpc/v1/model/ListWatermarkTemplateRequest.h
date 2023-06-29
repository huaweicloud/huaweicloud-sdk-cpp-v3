
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListWatermarkTemplateRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListWatermarkTemplateRequest_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListWatermarkTemplateRequest
    : public ModelBase
{
public:
    ListWatermarkTemplateRequest();
    virtual ~ListWatermarkTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListWatermarkTemplateRequest members

    /// <summary>
    /// 水印模板ID，最多10个 
    /// </summary>

    std::vector<int32_t>& getTemplateId();
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(std::vector<int32_t> value);

    /// <summary>
    /// 分页编号。查询指定“task_id”时，该参数无效。  默认值：0。 
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页记录数。取值范围：[1,100]，指定template_id时该参数无效 
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::vector<int32_t> templateId_;
    bool templateIdIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t size_;
    bool sizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListWatermarkTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<ListWatermarkTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListWatermarkTemplateRequest_H_
