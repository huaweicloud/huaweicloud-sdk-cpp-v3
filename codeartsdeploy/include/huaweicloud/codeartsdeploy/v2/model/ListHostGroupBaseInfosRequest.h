
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListHostGroupBaseInfosRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListHostGroupBaseInfosRequest_H_


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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ListHostGroupBaseInfosRequest
    : public ModelBase
{
public:
    ListHostGroupBaseInfosRequest();
    virtual ~ListHostGroupBaseInfosRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHostGroupBaseInfosRequest members

    /// <summary>
    /// 应用id
    /// </summary>

    std::string getApplicationId() const;
    bool applicationIdIsSet() const;
    void unsetapplicationId();
    void setApplicationId(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 操作系统：windows|linux
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

    /// <summary>
    /// 分页页码
    /// </summary>

    int32_t getPageIndex() const;
    bool pageIndexIsSet() const;
    void unsetpageIndex();
    void setPageIndex(int32_t value);

    /// <summary>
    /// 分页查询每页条数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 按主机集群名称搜索关键字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string applicationId_;
    bool applicationIdIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string os_;
    bool osIsSet_;
    int32_t pageIndex_;
    bool pageIndexIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string name_;
    bool nameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListHostGroupBaseInfosRequest& dereference_from_shared_ptr(std::shared_ptr<ListHostGroupBaseInfosRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListHostGroupBaseInfosRequest_H_
