
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListUsingGetRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListUsingGetRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListUsingGetRequest
    : public ModelBase
{
public:
    ListUsingGetRequest();
    virtual ~ListUsingGetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUsingGetRequest members

    /// <summary>
    /// 服务id
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// 看板名称，精确匹配
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageNumber() const;
    bool pageNumberIsSet() const;
    void unsetpageNumber();
    void setPageNumber(int32_t value);

    /// <summary>
    /// 每页数量
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t pageNumber_;
    bool pageNumberIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListUsingGetRequest& dereference_from_shared_ptr(std::shared_ptr<ListUsingGetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListUsingGetRequest_H_
