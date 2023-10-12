
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ListOperation_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ListOperation_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 本次查询全量云服务的操作事件列表。
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  ListOperation
    : public ModelBase
{
public:
    ListOperation();
    virtual ~ListOperation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOperation members

    /// <summary>
    /// 事件对应的云服务类型。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 事件对应的资源类型。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 操作事件名称数组。
    /// </summary>

    std::vector<std::string>& getOperationList();
    bool operationListIsSet() const;
    void unsetoperationList();
    void setOperationList(const std::vector<std::string>& value);


protected:
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::vector<std::string> operationList_;
    bool operationListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ListOperation_H_
