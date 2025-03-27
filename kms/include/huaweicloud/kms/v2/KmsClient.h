#ifndef HUAWEICLOUD_SDK_KMS_V2_KmsClient_H_
#define HUAWEICLOUD_SDK_KMS_V2_KmsClient_H_

#include <huaweicloud/kms/v2/KmsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/kms/v2/model/AssociateAliasRequest.h>
#include <huaweicloud/kms/v2/model/AssociateAliasRequestBody.h>
#include <huaweicloud/kms/v2/model/AssociateAliasResponse.h>
#include <huaweicloud/kms/v2/model/BatchCreateKmsTagsRequest.h>
#include <huaweicloud/kms/v2/model/BatchCreateKmsTagsRequestBody.h>
#include <huaweicloud/kms/v2/model/BatchCreateKmsTagsResponse.h>
#include <huaweicloud/kms/v2/model/CancelGrantRequest.h>
#include <huaweicloud/kms/v2/model/CancelGrantResponse.h>
#include <huaweicloud/kms/v2/model/CancelKeyDeletionRequest.h>
#include <huaweicloud/kms/v2/model/CancelKeyDeletionResponse.h>
#include <huaweicloud/kms/v2/model/CancelSelfGrantRequest.h>
#include <huaweicloud/kms/v2/model/CancelSelfGrantResponse.h>
#include <huaweicloud/kms/v2/model/CreateAliasRequest.h>
#include <huaweicloud/kms/v2/model/CreateAliasRequestBody.h>
#include <huaweicloud/kms/v2/model/CreateAliasResponse.h>
#include <huaweicloud/kms/v2/model/CreateDatakeyRequest.h>
#include <huaweicloud/kms/v2/model/CreateDatakeyRequestBody.h>
#include <huaweicloud/kms/v2/model/CreateDatakeyResponse.h>
#include <huaweicloud/kms/v2/model/CreateDatakeyWithoutPlaintextRequest.h>
#include <huaweicloud/kms/v2/model/CreateDatakeyWithoutPlaintextResponse.h>
#include <huaweicloud/kms/v2/model/CreateEcDatakeyPairRequest.h>
#include <huaweicloud/kms/v2/model/CreateEcDatakeyPairRequestBody.h>
#include <huaweicloud/kms/v2/model/CreateEcDatakeyPairResponse.h>
#include <huaweicloud/kms/v2/model/CreateGrantRequest.h>
#include <huaweicloud/kms/v2/model/CreateGrantRequestBody.h>
#include <huaweicloud/kms/v2/model/CreateGrantResponse.h>
#include <huaweicloud/kms/v2/model/CreateKeyRequest.h>
#include <huaweicloud/kms/v2/model/CreateKeyRequestBody.h>
#include <huaweicloud/kms/v2/model/CreateKeyResponse.h>
#include <huaweicloud/kms/v2/model/CreateKeyStoreRequest.h>
#include <huaweicloud/kms/v2/model/CreateKeyStoreRequestBody.h>
#include <huaweicloud/kms/v2/model/CreateKeyStoreResponse.h>
#include <huaweicloud/kms/v2/model/CreateKmsTagRequest.h>
#include <huaweicloud/kms/v2/model/CreateKmsTagRequestBody.h>
#include <huaweicloud/kms/v2/model/CreateKmsTagResponse.h>
#include <huaweicloud/kms/v2/model/CreateParametersForImportRequest.h>
#include <huaweicloud/kms/v2/model/CreateParametersForImportResponse.h>
#include <huaweicloud/kms/v2/model/CreateRandomRequest.h>
#include <huaweicloud/kms/v2/model/CreateRandomResponse.h>
#include <huaweicloud/kms/v2/model/CreateRsaDatakeyPairRequest.h>
#include <huaweicloud/kms/v2/model/CreateRsaDatakeyPairRequestBody.h>
#include <huaweicloud/kms/v2/model/CreateRsaDatakeyPairResponse.h>
#include <huaweicloud/kms/v2/model/DecryptDataRequest.h>
#include <huaweicloud/kms/v2/model/DecryptDataRequestBody.h>
#include <huaweicloud/kms/v2/model/DecryptDataResponse.h>
#include <huaweicloud/kms/v2/model/DecryptDatakeyRequest.h>
#include <huaweicloud/kms/v2/model/DecryptDatakeyRequestBody.h>
#include <huaweicloud/kms/v2/model/DecryptDatakeyResponse.h>
#include <huaweicloud/kms/v2/model/DeleteAliasRequest.h>
#include <huaweicloud/kms/v2/model/DeleteAliasRequestBody.h>
#include <huaweicloud/kms/v2/model/DeleteAliasResponse.h>
#include <huaweicloud/kms/v2/model/DeleteImportedKeyMaterialRequest.h>
#include <huaweicloud/kms/v2/model/DeleteImportedKeyMaterialResponse.h>
#include <huaweicloud/kms/v2/model/DeleteKeyRequest.h>
#include <huaweicloud/kms/v2/model/DeleteKeyResponse.h>
#include <huaweicloud/kms/v2/model/DeleteKeyStoreRequest.h>
#include <huaweicloud/kms/v2/model/DeleteKeyStoreResponse.h>
#include <huaweicloud/kms/v2/model/DeleteTagRequest.h>
#include <huaweicloud/kms/v2/model/DeleteTagResponse.h>
#include <huaweicloud/kms/v2/model/DisableKeyRequest.h>
#include <huaweicloud/kms/v2/model/DisableKeyResponse.h>
#include <huaweicloud/kms/v2/model/DisableKeyRotationRequest.h>
#include <huaweicloud/kms/v2/model/DisableKeyRotationResponse.h>
#include <huaweicloud/kms/v2/model/DisableKeyStoreRequest.h>
#include <huaweicloud/kms/v2/model/DisableKeyStoreResponse.h>
#include <huaweicloud/kms/v2/model/EnableKeyRequest.h>
#include <huaweicloud/kms/v2/model/EnableKeyResponse.h>
#include <huaweicloud/kms/v2/model/EnableKeyRotationRequest.h>
#include <huaweicloud/kms/v2/model/EnableKeyRotationResponse.h>
#include <huaweicloud/kms/v2/model/EnableKeyStoreRequest.h>
#include <huaweicloud/kms/v2/model/EnableKeyStoreResponse.h>
#include <huaweicloud/kms/v2/model/EncryptDataRequest.h>
#include <huaweicloud/kms/v2/model/EncryptDataRequestBody.h>
#include <huaweicloud/kms/v2/model/EncryptDataResponse.h>
#include <huaweicloud/kms/v2/model/EncryptDatakeyRequest.h>
#include <huaweicloud/kms/v2/model/EncryptDatakeyRequestBody.h>
#include <huaweicloud/kms/v2/model/EncryptDatakeyResponse.h>
#include <huaweicloud/kms/v2/model/GenRandomRequestBody.h>
#include <huaweicloud/kms/v2/model/GenerateMacRequest.h>
#include <huaweicloud/kms/v2/model/GenerateMacRequestBody.h>
#include <huaweicloud/kms/v2/model/GenerateMacResponse.h>
#include <huaweicloud/kms/v2/model/GetParametersForImportRequestBody.h>
#include <huaweicloud/kms/v2/model/ImportKeyMaterialRequest.h>
#include <huaweicloud/kms/v2/model/ImportKeyMaterialRequestBody.h>
#include <huaweicloud/kms/v2/model/ImportKeyMaterialResponse.h>
#include <huaweicloud/kms/v2/model/ListAliasResponseBody.h>
#include <huaweicloud/kms/v2/model/ListAliasesRequest.h>
#include <huaweicloud/kms/v2/model/ListAliasesResponse.h>
#include <huaweicloud/kms/v2/model/ListGrantsRequest.h>
#include <huaweicloud/kms/v2/model/ListGrantsRequestBody.h>
#include <huaweicloud/kms/v2/model/ListGrantsResponse.h>
#include <huaweicloud/kms/v2/model/ListKeyDetailRequest.h>
#include <huaweicloud/kms/v2/model/ListKeyDetailResponse.h>
#include <huaweicloud/kms/v2/model/ListKeyStoresRequest.h>
#include <huaweicloud/kms/v2/model/ListKeyStoresResponse.h>
#include <huaweicloud/kms/v2/model/ListKeysRequest.h>
#include <huaweicloud/kms/v2/model/ListKeysRequestBody.h>
#include <huaweicloud/kms/v2/model/ListKeysResponse.h>
#include <huaweicloud/kms/v2/model/ListKmsByTagsRequest.h>
#include <huaweicloud/kms/v2/model/ListKmsByTagsRequestBody.h>
#include <huaweicloud/kms/v2/model/ListKmsByTagsResponse.h>
#include <huaweicloud/kms/v2/model/ListKmsTagsRequest.h>
#include <huaweicloud/kms/v2/model/ListKmsTagsResponse.h>
#include <huaweicloud/kms/v2/model/ListRetirableGrantsRequest.h>
#include <huaweicloud/kms/v2/model/ListRetirableGrantsRequestBody.h>
#include <huaweicloud/kms/v2/model/ListRetirableGrantsResponse.h>
#include <huaweicloud/kms/v2/model/ListSupportRegionsRequest.h>
#include <huaweicloud/kms/v2/model/ListSupportRegionsResponse.h>
#include <huaweicloud/kms/v2/model/OperateKeyRequestBody.h>
#include <huaweicloud/kms/v2/model/ReplicateKeyRequest.h>
#include <huaweicloud/kms/v2/model/ReplicateKeyRequestBody.h>
#include <huaweicloud/kms/v2/model/ReplicateKeyResponse.h>
#include <huaweicloud/kms/v2/model/RevokeGrantRequestBody.h>
#include <huaweicloud/kms/v2/model/ScheduleKeyDeletionRequestBody.h>
#include <huaweicloud/kms/v2/model/ShowKeyRotationStatusRequest.h>
#include <huaweicloud/kms/v2/model/ShowKeyRotationStatusResponse.h>
#include <huaweicloud/kms/v2/model/ShowKeyStoreRequest.h>
#include <huaweicloud/kms/v2/model/ShowKeyStoreResponse.h>
#include <huaweicloud/kms/v2/model/ShowKmsTagsRequest.h>
#include <huaweicloud/kms/v2/model/ShowKmsTagsResponse.h>
#include <huaweicloud/kms/v2/model/ShowPublicKeyRequest.h>
#include <huaweicloud/kms/v2/model/ShowPublicKeyResponse.h>
#include <huaweicloud/kms/v2/model/ShowUserInstancesRequest.h>
#include <huaweicloud/kms/v2/model/ShowUserInstancesResponse.h>
#include <huaweicloud/kms/v2/model/ShowUserQuotasRequest.h>
#include <huaweicloud/kms/v2/model/ShowUserQuotasResponse.h>
#include <huaweicloud/kms/v2/model/SignRequest.h>
#include <huaweicloud/kms/v2/model/SignRequestBody.h>
#include <huaweicloud/kms/v2/model/SignResponse.h>
#include <huaweicloud/kms/v2/model/UpdateKeyAliasRequest.h>
#include <huaweicloud/kms/v2/model/UpdateKeyAliasRequestBody.h>
#include <huaweicloud/kms/v2/model/UpdateKeyAliasResponse.h>
#include <huaweicloud/kms/v2/model/UpdateKeyDescriptionRequest.h>
#include <huaweicloud/kms/v2/model/UpdateKeyDescriptionRequestBody.h>
#include <huaweicloud/kms/v2/model/UpdateKeyDescriptionResponse.h>
#include <huaweicloud/kms/v2/model/UpdateKeyRotationIntervalRequest.h>
#include <huaweicloud/kms/v2/model/UpdateKeyRotationIntervalRequestBody.h>
#include <huaweicloud/kms/v2/model/UpdateKeyRotationIntervalResponse.h>
#include <huaweicloud/kms/v2/model/UpdatePrimaryRegionRequest.h>
#include <huaweicloud/kms/v2/model/UpdatePrimaryRegionRequestBody.h>
#include <huaweicloud/kms/v2/model/UpdatePrimaryRegionResponse.h>
#include <huaweicloud/kms/v2/model/ValidateSignatureRequest.h>
#include <huaweicloud/kms/v2/model/ValidateSignatureResponse.h>
#include <huaweicloud/kms/v2/model/VerifyMacRequest.h>
#include <huaweicloud/kms/v2/model/VerifyMacRequestBody.h>
#include <huaweicloud/kms/v2/model/VerifyMacResponse.h>
#include <huaweicloud/kms/v2/model/VerifyRequestBody.h>
#include <string>

#include <huaweicloud/kms/v2/model/ShowVersionRequest.h>
#include <huaweicloud/kms/v2/model/ShowVersionResponse.h>
#include <huaweicloud/kms/v2/model/ShowVersionsRequest.h>
#include <huaweicloud/kms/v2/model/ShowVersionsResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Kms::V2::Model;

class HUAWEICLOUD_KMS_V2_EXPORT  KmsClient : public Client
{
public:

    KmsClient();

    virtual ~KmsClient();

    static ClientBuilder<KmsClient> newBuilder();

    // 
    //
    // 关联别名。
    // 你可以将别名从原密钥关联到另一个新的密钥
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateAliasResponse> associateAlias(
        AssociateAliasRequest &request
    );
    // 批量添加删除密钥标签
    //
    // - 功能介绍：批量添加删除密钥标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateKmsTagsResponse> batchCreateKmsTags(
        BatchCreateKmsTagsRequest &request
    );
    // 撤销授权
    //
    // - 功能介绍：撤销授权，授权用户撤销被授权用户操作密钥的权限。
    // - 说明：
    //    - 创建密钥的用户才能撤销该密钥授权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelGrantResponse> cancelGrant(
        CancelGrantRequest &request
    );
    // 取消计划删除密钥
    //
    // - 功能介绍：取消计划删除密钥。
    // - 说明：密钥处于“计划删除”状态才能取消计划删除密钥。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelKeyDeletionResponse> cancelKeyDeletion(
        CancelKeyDeletionRequest &request
    );
    // 退役授权
    //
    // - 功能介绍：退役授权，表示被授权用户不再具有授权密钥的操作权。
    //   例如：用户A授权用户B可以操作密钥A/key，同时授权用户C可以撤销该授权，
    //   那么用户A、B、C均可退役该授权，退役授权后，用户B不再可以使用A/key。
    // - 须知：
    //      可执行退役授权的主体包括：
    //    - 创建授权的用户；
    //    - 授权中retiring_principal指向的用户；
    //    - 当授权的操作列表中包含retire-grant时，grantee_principal指向的用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelSelfGrantResponse> cancelSelfGrant(
        CancelSelfGrantRequest &request
    );
    // 
    //
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAliasResponse> createAlias(
        CreateAliasRequest &request
    );
    // 创建数据密钥
    //
    // - 功能介绍：创建数据密钥，返回结果包含明文和密文。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDatakeyResponse> createDatakey(
        CreateDatakeyRequest &request
    );
    // 创建不含明文数据密钥
    //
    // - 功能介绍：创建数据密钥，返回结果只包含密文。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDatakeyWithoutPlaintextResponse> createDatakeyWithoutPlaintext(
        CreateDatakeyWithoutPlaintextRequest &request
    );
    // 创建EC数据密钥对
    //
    // - 功能介绍：创建EC数据密钥对，返回结果包含明文公钥和密文私钥，根据参数决定是否返回明文私钥。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateEcDatakeyPairResponse> createEcDatakeyPair(
        CreateEcDatakeyPairRequest &request
    );
    // 创建授权
    //
    // - 功能介绍：创建授权，被授权用户可以对授权密钥进行操作。
    // - 说明：
    //    - 服务默认主密钥（密钥别名后缀为“/default”）不可以授权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGrantResponse> createGrant(
        CreateGrantRequest &request
    );
    // 创建密钥
    //
    // 创建用户主密钥，用户主密钥可以为对称密钥或非对称密钥。
    // - 对称密钥为长度为256位AES密钥或者128位SM4密钥，可用于小量数据的加密或者用于加密数据密钥。
    // - 非对称密钥可以为RSA密钥对或者ECC密钥对（包含SM2密钥对），可用于加解密数据、数字签名及验签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateKeyResponse> createKey(
        CreateKeyRequest &request
    );
    // 创建专属密钥库
    //
    // - \&quot;创建租户专属密钥库，专属密钥库使用DHSM实例作为密钥的存储\&quot;
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateKeyStoreResponse> createKeyStore(
        CreateKeyStoreRequest &request
    );
    // 添加密钥标签
    //
    // - 功能介绍：添加密钥标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateKmsTagResponse> createKmsTag(
        CreateKmsTagRequest &request
    );
    // 获取密钥导入参数
    //
    // - 功能介绍：获取导入密钥的必要参数，包括密钥导入令牌和密钥加密公钥。
    // - 说明：返回的公钥类型默认为RSA_2048。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateParametersForImportResponse> createParametersForImport(
        CreateParametersForImportRequest &request
    );
    // 创建随机数
    //
    // - 功能介绍：
    //   生成8~8192bit范围内的随机数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRandomResponse> createRandom(
        CreateRandomRequest &request
    );
    // 创建RSA数据密钥对
    //
    // - 功能介绍：创建rsa数据密钥对，返回结果包含明文公钥和密文私钥，根据参数决定是否返回明文私钥。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRsaDatakeyPairResponse> createRsaDatakeyPair(
        CreateRsaDatakeyPairRequest &request
    );
    // 解密数据
    //
    // - 功能介绍：解密数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DecryptDataResponse> decryptData(
        DecryptDataRequest &request
    );
    // 解密数据密钥
    //
    // - 功能介绍：解密数据密钥，用指定的主密钥解密数据密钥。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DecryptDatakeyResponse> decryptDatakey(
        DecryptDatakeyRequest &request
    );
    // 
    //
    // 删除别名
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAliasResponse> deleteAlias(
        DeleteAliasRequest &request
    );
    // 删除密钥材料
    //
    // - 功能介绍：删除密钥材料信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteImportedKeyMaterialResponse> deleteImportedKeyMaterial(
        DeleteImportedKeyMaterialRequest &request
    );
    // 计划删除密钥
    //
    // - 功能介绍：计划多少天后删除密钥，可设置7天～1096天内删除密钥。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteKeyResponse> deleteKey(
        DeleteKeyRequest &request
    );
    // 删除专属密钥库
    //
    // 删除租户专属密钥库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteKeyStoreResponse> deleteKeyStore(
        DeleteKeyStoreRequest &request
    );
    // 删除密钥标签
    //
    // - 功能介绍：删除密钥标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTagResponse> deleteTag(
        DeleteTagRequest &request
    );
    // 禁用密钥
    //
    // - 功能介绍：禁用密钥，密钥禁用后不可以使用。
    // - 说明：密钥为启用状态才能禁用密钥。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableKeyResponse> disableKey(
        DisableKeyRequest &request
    );
    // 关闭密钥轮换
    //
    // - 功能介绍：关闭用户主密钥轮换。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableKeyRotationResponse> disableKeyRotation(
        DisableKeyRotationRequest &request
    );
    // 禁用专属密钥库
    //
    // 禁用租户专属密钥库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableKeyStoreResponse> disableKeyStore(
        DisableKeyStoreRequest &request
    );
    // 启用密钥
    //
    // - 功能介绍：启用密钥，密钥启用后才可以使用。
    // - 说明：密钥为禁用状态才能启用密钥。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableKeyResponse> enableKey(
        EnableKeyRequest &request
    );
    // 开启密钥轮换
    //
    // - 功能介绍：开启用户主密钥轮换。
    // - 说明：
    //   - 开启密钥轮换后，默认轮换间隔时间为365天。
    //   - 默认主密钥及外部导入密钥不支持轮换操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableKeyRotationResponse> enableKeyRotation(
        EnableKeyRotationRequest &request
    );
    // 启用专属密钥库
    //
    // 启用租户专属密钥库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableKeyStoreResponse> enableKeyStore(
        EnableKeyStoreRequest &request
    );
    // 加密数据
    //
    // - 功能介绍：加密数据，用指定的用户主密钥加密数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EncryptDataResponse> encryptData(
        EncryptDataRequest &request
    );
    // 加密数据密钥
    //
    // - 功能介绍：加密数据密钥，用指定的主密钥加密数据密钥。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EncryptDatakeyResponse> encryptDatakey(
        EncryptDatakeyRequest &request
    );
    // 生成消息验证码
    //
    // 功能介绍：生成消息验证码
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GenerateMacResponse> generateMac(
        GenerateMacRequest &request
    );
    // 导入密钥材料
    //
    // - 功能介绍：导入密钥材料。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ImportKeyMaterialResponse> importKeyMaterial(
        ImportKeyMaterialRequest &request
    );
    // 
    //
    // 查询一个密钥关联的所有别名
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAliasesResponse> listAliases(
        ListAliasesRequest &request
    );
    // 查询授权列表
    //
    // - 功能介绍：查询密钥的授权列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGrantsResponse> listGrants(
        ListGrantsRequest &request
    );
    // 查询密钥信息
    //
    // - 功能介绍：查询密钥详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKeyDetailResponse> listKeyDetail(
        ListKeyDetailRequest &request
    );
    // 查询专属密钥库列表
    //
    // 查询租户专属密钥库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKeyStoresResponse> listKeyStores(
        ListKeyStoresRequest &request
    );
    // 查询密钥列表
    //
    // - 功能介绍：查询用户所有密钥列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKeysResponse> listKeys(
        ListKeysRequest &request
    );
    // 查询密钥实例
    //
    // - 功能介绍：查询密钥实例。通过标签过滤，查询指定用户主密钥的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKmsByTagsResponse> listKmsByTags(
        ListKmsByTagsRequest &request
    );
    // 查询项目标签
    //
    // - 功能介绍：查询用户在指定项目下的所有标签集合。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKmsTagsResponse> listKmsTags(
        ListKmsTagsRequest &request
    );
    // 查询可退役授权列表
    //
    // - 功能介绍：查询用户可以退役的授权列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRetirableGrantsResponse> listRetirableGrants(
        ListRetirableGrantsRequest &request
    );
    // 查询跨区域密钥所支持的区域
    //
    // - 功能介绍：查询跨区域密钥所支持的区域。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSupportRegionsResponse> listSupportRegions(
        ListSupportRegionsRequest &request
    );
    // 复制密钥到指定区域
    //
    // 将本区域的密钥复制到指定区域。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ReplicateKeyResponse> replicateKey(
        ReplicateKeyRequest &request
    );
    // 查询密钥轮换状态
    //
    // - 功能介绍：查询用户主密钥轮换状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowKeyRotationStatusResponse> showKeyRotationStatus(
        ShowKeyRotationStatusRequest &request
    );
    // 获取专属密钥库
    //
    // 获取租户专属密钥库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowKeyStoreResponse> showKeyStore(
        ShowKeyStoreRequest &request
    );
    // 查询密钥标签
    //
    // - 功能介绍：查询密钥标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowKmsTagsResponse> showKmsTags(
        ShowKmsTagsRequest &request
    );
    // 查询公钥信息
    //
    // - 查询用户指定非对称密钥的公钥信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPublicKeyResponse> showPublicKey(
        ShowPublicKeyRequest &request
    );
    // 查询实例数
    //
    // - 功能介绍：查询实例数，获取用户已经创建的用户主密钥数量。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUserInstancesResponse> showUserInstances(
        ShowUserInstancesRequest &request
    );
    // 查询配额
    //
    // - 功能介绍：查询配额，查询用户可以创建的用户主密钥配额总数及当前使用量信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUserQuotasResponse> showUserQuotas(
        ShowUserQuotasRequest &request
    );
    // 签名数据
    //
    // - 功能介绍：使用非对称密钥的私钥对消息或消息摘要进行数字签名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SignResponse> sign(
        SignRequest &request
    );
    // 修改密钥别名
    //
    // - 功能介绍：修改用户主密钥别名。
    // - 说明：
    //    - 服务默认主密钥（密钥别名后缀为“/default”）不可以修改。
    //    - 密钥处于“计划删除”状态，密钥别名不可以修改。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateKeyAliasResponse> updateKeyAlias(
        UpdateKeyAliasRequest &request
    );
    // 修改密钥描述
    //
    // - 功能介绍：修改用户主密钥描述信息。
    // - 说明：
    //    - 服务默认主密钥（密钥别名后缀为“/default”）不可以修改。
    //    - 密钥处于“计划删除”状态，密钥描述不可以修改。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateKeyDescriptionResponse> updateKeyDescription(
        UpdateKeyDescriptionRequest &request
    );
    // 修改密钥轮换周期
    //
    // - 功能介绍：修改用户主密钥轮换周期。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateKeyRotationIntervalResponse> updateKeyRotationInterval(
        UpdateKeyRotationIntervalRequest &request
    );
    // 修改密钥所属的主区域
    //
    // 修改密钥所属的主区域。修改后当前区域会变为副本区域。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePrimaryRegionResponse> updatePrimaryRegion(
        UpdatePrimaryRegionRequest &request
    );
    // 验证签名
    //
    // - 功能介绍：使用非对称密钥的私钥对消息或消息摘要进行签名验证。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ValidateSignatureResponse> validateSignature(
        ValidateSignatureRequest &request
    );
    // 校验消息验证码
    //
    // 功能介绍：校验消息验证码
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<VerifyMacResponse> verifyMac(
        VerifyMacRequest &request
    );

    // 查询指定版本信息
    //
    // - 功能介绍：查指定API版本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVersionResponse> showVersion(
        ShowVersionRequest &request
    );
    // 查询版本信息列表
    //
    // - 功能介绍：查询API版本信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVersionsResponse> showVersions(
        ShowVersionsRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_KMS_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Kms::V2::KmsClient>;

#endif // HUAWEICLOUD_SDK_KMS_V2_KmsClient_H_

