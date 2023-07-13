
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListStreamForbiddenRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListStreamForbiddenRequest_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListStreamForbiddenRequest
    : public ModelBase
{
public:
    ListStreamForbiddenRequest();
    virtual ~ListStreamForbiddenRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListStreamForbiddenRequest members

    /// <summary>
    /// 推流域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 应用名称，不指定则查询domain下所有应用的禁止直播推流信息
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 流名称
    /// </summary>

    std::string getStreamName() const;
    bool streamNameIsSet() const;
    void unsetstreamName();
    void setStreamName(const std::string& value);

    /// <summary>
    /// 分页编号。 默认为0。 
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页记录数。  取值范围：1-100。  默认为10。 
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::string domain_;
    bool domainIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string streamName_;
    bool streamNameIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t size_;
    bool sizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListStreamForbiddenRequest& dereference_from_shared_ptr(std::shared_ptr<ListStreamForbiddenRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListStreamForbiddenRequest_H_
