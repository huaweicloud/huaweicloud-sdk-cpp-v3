
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteServiceItemsResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteServiceItemsResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  BatchDeleteServiceItemsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteServiceItemsResponse();
    virtual ~BatchDeleteServiceItemsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteServiceItemsResponse members

    /// <summary>
    /// 批量删除服务组成员id列表
    /// </summary>

    std::vector<std::string>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<std::string>& value);


protected:
    std::vector<std::string> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteServiceItemsResponse_H_
