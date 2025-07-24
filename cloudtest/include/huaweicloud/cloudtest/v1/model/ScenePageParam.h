
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ScenePageParam_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ScenePageParam_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ScenePageParam
    : public ModelBase
{
public:
    ScenePageParam();
    virtual ~ScenePageParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScenePageParam members

    /// <summary>
    /// 
    /// </summary>

    std::string getDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(const std::string& value);

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

    std::string getMindmapId() const;
    bool mindmapIdIsSet() const;
    void unsetmindmapId();
    void setMindmapId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string deleted_;
    bool deletedIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string mindmapId_;
    bool mindmapIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ScenePageParam_H_
