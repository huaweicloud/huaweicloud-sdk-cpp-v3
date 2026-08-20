
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListModulesDetailRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListModulesDetailRequest_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ListModulesDetailRequest
    : public ModelBase
{
public:
    ListModulesDetailRequest();
    virtual ~ListModulesDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListModulesDetailRequest members

    /// <summary>
    /// 项目uuid
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 区域名
    /// </summary>

    std::string getRegionName() const;
    bool regionNameIsSet() const;
    void unsetregionName();
    void setRegionName(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 产品线
    /// </summary>

    std::string getProductLine() const;
    bool productLineIsSet() const;
    void unsetproductLine();
    void setProductLine(const std::string& value);

    /// <summary>
    /// 标签
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 扩展点
    /// </summary>

    std::vector<std::string>& getLocations();
    bool locationsIsSet() const;
    void unsetlocations();
    void setLocations(const std::vector<std::string>& value);


protected:
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string regionName_;
    bool regionNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string productLine_;
    bool productLineIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::vector<std::string> locations_;
    bool locationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListModulesDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ListModulesDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListModulesDetailRequest_H_
