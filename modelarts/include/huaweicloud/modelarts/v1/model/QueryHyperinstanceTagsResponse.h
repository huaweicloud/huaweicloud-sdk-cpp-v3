
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_QueryHyperinstanceTagsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_QueryHyperinstanceTagsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/TmsTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  QueryHyperinstanceTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    QueryHyperinstanceTagsResponse();
    virtual ~QueryHyperinstanceTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryHyperinstanceTagsResponse members

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<TmsTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TmsTag>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<TmsTag> tags_;
    bool tagsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_QueryHyperinstanceTagsResponse_H_
