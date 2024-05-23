
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareAssociationsReqBody_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareAssociationsReqBody_H_


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
/// The request body of the SearchResourceShareAssociations operation.
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  SearchResourceShareAssociationsReqBody
    : public ModelBase
{
public:
    SearchResourceShareAssociationsReqBody();
    virtual ~SearchResourceShareAssociationsReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchResourceShareAssociationsReqBody members

    /// <summary>
    /// 指定绑定的状态。
    /// </summary>

    std::string getAssociationStatus() const;
    bool associationStatusIsSet() const;
    void unsetassociationStatus();
    void setAssociationStatus(const std::string& value);

    /// <summary>
    /// 指定绑定的类型（principal或resource）。
    /// </summary>

    std::string getAssociationType() const;
    bool associationTypeIsSet() const;
    void unsetassociationType();
    void setAssociationType(const std::string& value);

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
    /// 指定绑定的资源使用者。
    /// </summary>

    std::string getPrincipal() const;
    bool principalIsSet() const;
    void unsetprincipal();
    void setPrincipal(const std::string& value);

    /// <summary>
    /// 指定绑定的共享资源URN。
    /// </summary>

    std::string getResourceUrn() const;
    bool resourceUrnIsSet() const;
    void unsetresourceUrn();
    void setResourceUrn(const std::string& value);

    /// <summary>
    /// 指定资源共享实例的ID列表。
    /// </summary>

    std::vector<std::string>& getResourceShareIds();
    bool resourceShareIdsIsSet() const;
    void unsetresourceShareIds();
    void setResourceShareIds(const std::vector<std::string>& value);

    /// <summary>
    /// 指定共享资源ID列表。
    /// </summary>

    std::vector<std::string>& getResourceIds();
    bool resourceIdsIsSet() const;
    void unsetresourceIds();
    void setResourceIds(const std::vector<std::string>& value);


protected:
    std::string associationStatus_;
    bool associationStatusIsSet_;
    std::string associationType_;
    bool associationTypeIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string principal_;
    bool principalIsSet_;
    std::string resourceUrn_;
    bool resourceUrnIsSet_;
    std::vector<std::string> resourceShareIds_;
    bool resourceShareIdsIsSet_;
    std::vector<std::string> resourceIds_;
    bool resourceIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareAssociationsReqBody_H_
