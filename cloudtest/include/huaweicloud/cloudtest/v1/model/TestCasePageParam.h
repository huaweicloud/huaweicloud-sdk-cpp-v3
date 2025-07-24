
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCasePageParam_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCasePageParam_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCasePageParam
    : public ModelBase
{
public:
    TestCasePageParam();
    virtual ~TestCasePageParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCasePageParam members

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

    std::string getDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getIdCollection();
    bool idCollectionIsSet() const;
    void unsetidCollection();
    void setIdCollection(const std::vector<std::string>& value);

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

    std::vector<std::string>& getNodeIdCollection();
    bool nodeIdCollectionIsSet() const;
    void unsetnodeIdCollection();
    void setNodeIdCollection(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    bool isIsArchive() const;
    bool isArchiveIsSet() const;
    void unsetisArchive();
    void setIsArchive(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getCaseName() const;
    bool caseNameIsSet() const;
    void unsetcaseName();
    void setCaseName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    bool isHasSubMindmap() const;
    bool hasSubMindmapIsSet() const;
    void unsethasSubMindmap();
    void setHasSubMindmap(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getSubMindmapId();
    bool subMindmapIdIsSet() const;
    void unsetsubMindmapId();
    void setSubMindmapId(const std::vector<std::string>& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string deleted_;
    bool deletedIsSet_;
    std::vector<std::string> idCollection_;
    bool idCollectionIsSet_;
    std::string mindmapId_;
    bool mindmapIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::vector<std::string> nodeIdCollection_;
    bool nodeIdCollectionIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    bool isArchive_;
    bool isArchiveIsSet_;
    std::string caseName_;
    bool caseNameIsSet_;
    bool hasSubMindmap_;
    bool hasSubMindmapIsSet_;
    std::vector<std::string> subMindmapId_;
    bool subMindmapIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCasePageParam_H_
