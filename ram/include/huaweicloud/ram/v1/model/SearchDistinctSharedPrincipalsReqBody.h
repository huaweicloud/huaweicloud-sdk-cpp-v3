
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchDistinctSharedPrincipalsReqBody_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchDistinctSharedPrincipalsReqBody_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// The request body of the SearchSharedPrincipals operation.
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  SearchDistinctSharedPrincipalsReqBody
    : public ModelBase
{
public:
    SearchDistinctSharedPrincipalsReqBody();
    virtual ~SearchDistinctSharedPrincipalsReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchDistinctSharedPrincipalsReqBody members

    /// <summary>
    /// 分页页面的最大值。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 页面标记。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 指定资源使用者列表。
    /// </summary>

    std::vector<std::string>& getPrincipals();
    bool principalsIsSet() const;
    void unsetprincipals();
    void setPrincipals(const std::vector<std::string>& value);

    /// <summary>
    /// 指定资源的URN。
    /// </summary>

    std::string getResourceUrn() const;
    bool resourceUrnIsSet() const;
    void unsetresourceUrn();
    void setResourceUrn(const std::string& value);

    /// <summary>
    /// 指定资源共享实例的所有者（self或者other-accounts）。
    /// </summary>

    std::string getResourceOwner() const;
    bool resourceOwnerIsSet() const;
    void unsetresourceOwner();
    void setResourceOwner(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::vector<std::string> principals_;
    bool principalsIsSet_;
    std::string resourceUrn_;
    bool resourceUrnIsSet_;
    std::string resourceOwner_;
    bool resourceOwnerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchDistinctSharedPrincipalsReqBody_H_
