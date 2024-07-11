
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListAssociateEnvironmentsInfosRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListAssociateEnvironmentsInfosRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ListAssociateEnvironmentsInfosRequest
    : public ModelBase
{
public:
    ListAssociateEnvironmentsInfosRequest();
    virtual ~ListAssociateEnvironmentsInfosRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssociateEnvironmentsInfosRequest members

    /// <summary>
    /// 主机集群id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageIndex() const;
    bool pageIndexIsSet() const;
    void unsetpageIndex();
    void setPageIndex(int32_t value);

    /// <summary>
    /// 每页查询条数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    int32_t pageIndex_;
    bool pageIndexIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAssociateEnvironmentsInfosRequest& dereference_from_shared_ptr(std::shared_ptr<ListAssociateEnvironmentsInfosRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListAssociateEnvironmentsInfosRequest_H_
