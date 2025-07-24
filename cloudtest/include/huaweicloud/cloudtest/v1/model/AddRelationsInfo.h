
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddRelationsInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddRelationsInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/RelationInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AddRelationsInfo
    : public ModelBase
{
public:
    AddRelationsInfo();
    virtual ~AddRelationsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddRelationsInfo members

    /// <summary>
    /// 
    /// </summary>

    std::vector<RelationInfo>& getRelations();
    bool relationsIsSet() const;
    void unsetrelations();
    void setRelations(const std::vector<RelationInfo>& value);

    /// <summary>
    /// 工作项类型id
    /// </summary>

    std::string getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(const std::string& value);

    /// <summary>
    /// 版本uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 测试套id
    /// </summary>

    std::string getTaskUri() const;
    bool taskUriIsSet() const;
    void unsettaskUri();
    void setTaskUri(const std::string& value);

    /// <summary>
    /// 是否将需求添加到迭代
    /// </summary>

    bool isAddToIterator() const;
    bool addToIteratorIsSet() const;
    void unsetaddToIterator();
    void setAddToIterator(bool value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);


protected:
    std::vector<RelationInfo> relations_;
    bool relationsIsSet_;
    std::string trackerId_;
    bool trackerIdIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string taskUri_;
    bool taskUriIsSet_;
    bool addToIterator_;
    bool addToIteratorIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddRelationsInfo_H_
