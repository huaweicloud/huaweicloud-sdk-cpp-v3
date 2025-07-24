
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddResourceInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddResourceInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/SimpleResourceInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AddResourceInfo
    : public ModelBase
{
public:
    AddResourceInfo();
    virtual ~AddResourceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddResourceInfo members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 迭代uri
    /// </summary>

    std::string getIteratorUri() const;
    bool iteratorUriIsSet() const;
    void unsetiteratorUri();
    void setIteratorUri(const std::string& value);

    /// <summary>
    /// 资源类型, 对应serviceType
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// 是否选择issues
    /// </summary>

    std::string getIsAllIssues() const;
    bool isAllIssuesIsSet() const;
    void unsetisAllIssues();
    void setIsAllIssues(const std::string& value);

    /// <summary>
    /// 是否选择所有用例
    /// </summary>

    bool isAllImport() const;
    bool allImportIsSet() const;
    void unsetallImport();
    void setAllImport(bool value);

    /// <summary>
    /// 按照目录引入用例
    /// </summary>

    std::string getFeatureUri() const;
    bool featureUriIsSet() const;
    void unsetfeatureUri();
    void setFeatureUri(const std::string& value);

    /// <summary>
    /// 选择的资源列表, 对应sourceCaseUris
    /// </summary>

    std::vector<SimpleResourceInfo>& getSimpleResourceinfoList();
    bool simpleResourceinfoListIsSet() const;
    void unsetsimpleResourceinfoList();
    void setSimpleResourceinfoList(const std::vector<SimpleResourceInfo>& value);

    /// <summary>
    /// 反选的资源列表
    /// </summary>

    std::vector<SimpleResourceInfo>& getInvertSimpleResourceinfoList();
    bool invertSimpleResourceinfoListIsSet() const;
    void unsetinvertSimpleResourceinfoList();
    void setInvertSimpleResourceinfoList(const std::vector<SimpleResourceInfo>& value);

    /// <summary>
    /// 是否将需求添加到测试计划（不传或者true添加需求到测试计划，false就不添加）
    /// </summary>

    bool isAddToIterator() const;
    bool addToIteratorIsSet() const;
    void unsetaddToIterator();
    void setAddToIterator(bool value);


protected:
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string iteratorUri_;
    bool iteratorUriIsSet_;
    int32_t type_;
    bool typeIsSet_;
    std::string isAllIssues_;
    bool isAllIssuesIsSet_;
    bool allImport_;
    bool allImportIsSet_;
    std::string featureUri_;
    bool featureUriIsSet_;
    std::vector<SimpleResourceInfo> simpleResourceinfoList_;
    bool simpleResourceinfoListIsSet_;
    std::vector<SimpleResourceInfo> invertSimpleResourceinfoList_;
    bool invertSimpleResourceinfoListIsSet_;
    bool addToIterator_;
    bool addToIteratorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddResourceInfo_H_
