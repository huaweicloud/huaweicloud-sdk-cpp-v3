
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteDashboardRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteDashboardRequest_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  DeleteDashboardRequest
    : public ModelBase
{
public:
    DeleteDashboardRequest();
    virtual ~DeleteDashboardRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteDashboardRequest members

    /// <summary>
    /// 仪表盘id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 是否删除图表
    /// </summary>

    bool isIsDeleteCharts() const;
    bool isDeleteChartsIsSet() const;
    void unsetisDeleteCharts();
    void setIsDeleteCharts(bool value);

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。  最小长度：30  最大长度：30
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    bool isDeleteCharts_;
    bool isDeleteChartsIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteDashboardRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteDashboardRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteDashboardRequest_H_
