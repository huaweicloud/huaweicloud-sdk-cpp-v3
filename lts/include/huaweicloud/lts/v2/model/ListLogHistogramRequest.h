
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogHistogramRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogHistogramRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/QueryLogKeyWordCountRequestBody.h>

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
class HUAWEICLOUD_LTS_V2_EXPORT  ListLogHistogramRequest
    : public ModelBase
{
public:
    ListLogHistogramRequest();
    virtual ~ListLogHistogramRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLogHistogramRequest members

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QueryLogKeyWordCountRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const QueryLogKeyWordCountRequestBody& value);


protected:
    std::string contentType_;
    bool contentTypeIsSet_;
    QueryLogKeyWordCountRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListLogHistogramRequest& dereference_from_shared_ptr(std::shared_ptr<ListLogHistogramRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogHistogramRequest_H_
