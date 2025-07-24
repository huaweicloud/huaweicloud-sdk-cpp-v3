
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListFactorParam_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListFactorParam_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListFactorParam
    : public ModelBase
{
public:
    ListFactorParam();
    virtual ~ListFactorParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFactorParam members

    /// <summary>
    /// 
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getParentNodeIds();
    bool parentNodeIdsIsSet() const;
    void unsetparentNodeIds();
    void setParentNodeIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getCreatorNum() const;
    bool creatorNumIsSet() const;
    void unsetcreatorNum();
    void setCreatorNum(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getMindmapId() const;
    bool mindmapIdIsSet() const;
    void unsetmindmapId();
    void setMindmapId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getTestpointId() const;
    bool testpointIdIsSet() const;
    void unsettestpointId();
    void setTestpointId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getMindmapNodeId() const;
    bool mindmapNodeIdIsSet() const;
    void unsetmindmapNodeId();
    void setMindmapNodeId(const std::string& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> parentNodeIds_;
    bool parentNodeIdsIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string creatorNum_;
    bool creatorNumIsSet_;
    std::string mindmapId_;
    bool mindmapIdIsSet_;
    std::string testpointId_;
    bool testpointIdIsSet_;
    std::string mindmapNodeId_;
    bool mindmapNodeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListFactorParam_H_
